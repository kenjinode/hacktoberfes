import 'dart:math';
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: SpinWheelPage(),
    );
  }
}

class SpinWheelPage extends StatefulWidget {
  @override
  _SpinWheelPageState createState() => _SpinWheelPageState();
}

class _SpinWheelPageState extends State<SpinWheelPage> {
  double rotationAngle = 0.0; // Initial rotation angle
  double rotationSpeed = 0.05; // Speed of rotation

  @override
  void initState() {
    super.initState();
    // Start rotating the wheel
    startRotation();
  }

  void startRotation() {
    Future.delayed(Duration(milliseconds: 50), () {
      setState(() {
        rotationAngle += rotationSpeed;
        if (rotationAngle > 2 * pi) {
          rotationAngle = 0;
        }
      });
      startRotation();
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Spin Wheel'),
      ),
      body: Center(
        child: GestureDetector(
          onTap: () {
            // Add logic here to stop the wheel and determine the selected item
          },
          child: CustomPaint(
            size: Size(200.0, 200.0),
            painter: SpinWheelPainter(rotationAngle),
          ),
        ),
      ),
    );
  }
}

class SpinWheelPainter extends CustomPainter {
  final double rotationAngle;

  SpinWheelPainter(this.rotationAngle);

  @override
  void paint(Canvas canvas, Size size) {
    final radius = size.width / 2;
    final centerX = size.width / 2;
    final centerY = size.height / 2;

    final paint = Paint()
      ..color = Colors.blue
      ..style = PaintingStyle.fill;

    final numberOfItems = 8;
    final itemAngle = 2 * pi / numberOfItems;

    for (var i = 0; i < numberOfItems; i++) {
      final startAngle = i * itemAngle + rotationAngle;
      final endAngle = (i + 1) * itemAngle + rotationAngle;

      final path = Path()
        ..moveTo(centerX, centerY)
        ..arcTo(Rect.fromCircle(center: Offset(centerX, centerY), radius: radius), startAngle, itemAngle, false)
        ..close();

      canvas.drawPath(path, paint);
    }
  }

  @override
  bool shouldRepaint(CustomPainter oldDelegate) {
    return true;
  }
}

