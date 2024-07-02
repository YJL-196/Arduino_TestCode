#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// 初始化OLED显示屏对象，设置分辨率为128x64
// A4-----------SDA IIC 数据线
// A5-----------SCL IIC 时钟线
Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &Wire);

void setup() {
  Serial.begin(9600);

  // 初始化OLED显示屏
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();

  // 设置文本样式
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);

  // 显示提示信息 Drawing Shapes
  display.setCursor(30, 8);
  display.println("Drawing Shapes");

  // 绘制文本 Square:
  display.setTextSize(1);
  display.setCursor(10, 25);
  display.println("Square:");

  // 在屏幕内部绘制正方形
  display.drawRect(15, 40, 20, 20, SSD1306_WHITE);  // (x, y, width, height, color)

  // 显示文本 Circle:
  display.setTextSize(1);
  display.setCursor(60, 25);
  display.println("Circle:");

  // 在屏幕内部绘制圆
  display.drawCircle(80, 50, 12, SSD1306_WHITE);  // (centerX, centerY, radius, color)


  // 更新显示内容
  display.display();
}

void loop() {

}

