#define MAX_WINDOW_NUM 32
#define MAX_WIDGET_NUM 32
#define MAX_STRING_NUM 256

typedef struct RGB
{
  unsigned char B;
  unsigned char G;
  unsigned char R;
} RGB;

typedef enum WidgetType
{
  label,
  textBox,
  button,
  imageView
} WidgetType;

typedef struct Label
{
  int leftTopX, leftTopY, width, height;
  char text[MAX_STRING_NUM];
} Label;

typedef struct TextBox
{
  int leftTopX, leftTopY, width, height;
  char text[MAX_STRING_NUM];
} TextBox;

typedef struct Button
{
  int leftTopX, leftTopY, width, height;
  char text[MAX_STRING_NUM];
} Button;

typedef struct ImageView
{
  int leftTopX, leftTopY, width, height;
  struct RGB* image;
} ImageView;

typedef union WidgetContext
{
  Label* label;
  TextBox* textBox;
  Button* button;
  ImageView* imageView;
} WidgetContext;

typedef struct Widget
{
  WidgetType type;
  WidgetContext context;
} Widget;

typedef struct Window
{
  int show;
  int leftTopX, leftTopY, width, height;
  char caption[MAX_STRING_NUM];
  int widgetsNum;
  Widget widgets[MAX_WIDGET_NUM];
} Window;

