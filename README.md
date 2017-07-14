## `基于MVVM模式的复杂验证码识别`
### `组员`
* 组长：陈凌昊
* 组员：余淏
* 组员：王钰博
* 组员：卢雨洁 
* 组员：邓墨琳
### `人员分工`
* 陈凌昊：Model和ViewModel以及App的整合
* 余淏：View的开发、github、jenkins的使用
* 卢雨洁：jenkins持续集成的搭建和Tesseract的使用以及View的开发
* 邓墨林：Tessaeract-OCR识别数字、训练字库和软件图标以及相关图形界面的美工设计
* 王钰博：tesseract的使用，训练字库，识别图片，opencv使用
### `使用说明`
* 识别 ：菜单栏-文件-导入图片-选择要识别的图片-选择灰度化方式-点击确定-点击开始识别
* 保存结果 ：菜单栏-文件-保存-选择路径-保存
### `功能`
支持用户在本地通过路径选择图片，经过去噪、去背景、二值化等图像处理，识别图片中的英文和数字。支持用户自主调节图像处理过程的参数，再进行识别。能够支持用户把识别结果保存为文档。

### `实现步骤`
* 图像采集 ：本项目通过本地选取的方式读入图片。
    
* 预处理 ：检测是否为正确的图像格式，转换到合适的格式，压缩，去除噪音，灰度
化，转换色彩空间。
    
* 检测 ：定位验证码文字所在的主要区域。
    
* 前处理 ：验证码文字的切割
    
* 训练 ：通过各种模式识别，机器学习算法，来挑选和训练合适数量的训练集。
    
* 识别 ：输入待识别的处理后的图片，转换成分类器需要的输入格式，然后通过输出的类
和置信度，来判断大概可能是哪个字母。识别本质上就是分类。

### `MVVM模式`
MVVM模式由视图(View)、视图模型 (ViewModel)、模型(Model)三部分组成，通 过这三部分实现UI逻辑、呈现逻辑和状态控 制、数据与业务逻辑的分离。 
### `Model`
数据访问层
* para
    * Mat m
* func
    * Mat getMat()
    * void loadPicture(string)

### `View`
UI界面
* para
    * filename :QString
    * originScene : QGraphicsScene*
    * loadPictureCommand : BaseCommand*
    * pImg : QImage*
* func
    * setLoadPictureCommand(BaseCommand*) : void
    * setImg(Qimage*) : void
    * update(string) : void
    * commandSucceed(bool) : void

### `View-Model`
View的抽象，负责View与 Model之间信息转换，同时将View的 Command传送到Model
* para
    * pImg : QImage*
    * loadPictureCommand : BaseCommand*
    * model : Model*
* func
    * getLoadPictureCommand() : BaseCommand*
    * setModel(Model*) : void
    * loadPicture(string) : void
    * getpImg() : Qimage*
    * cvMatToQImage(Mat&) : void
    * update(string) : void
    * commandSucceed(bool) : void
### `功能效果图`


