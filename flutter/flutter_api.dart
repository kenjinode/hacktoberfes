import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:http/http.dart' as http;

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: ApiExample(),
    );
  }
}

class ApiExample extends StatefulWidget {
  @override
  _ApiExampleState createState() => _ApiExampleState();
}

class _ApiExampleState extends State<ApiExample> {
  String _apiResponse = "No data";

  Future<void> fetchData() async {
    final response = await http.get(Uri.parse('https://jsonplaceholder.typicode.com/posts/1'));

    if (response.statusCode == 200) {
      final Map<String, dynamic> data = json.decode(response.body);
      setState(() {
        _apiResponse = "Title: ${data['title']}\nBody: ${data['body']}";
      });
    } else {
      setState(() {
        _apiResponse = "Failed to fetch data";
      });
    }
  }

  @override
  void initState() {
    super.initState();
    fetchData();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('API Example'),
      ),
      body: Center(
        child: Text(_apiResponse),
      ),
    );
  }
}

