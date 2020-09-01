//
//  ConstantDefine.h
//  Pods
//
//  Created by 谭高威 on 2020/5/20.
//

#ifndef ConstantDefine_h
#define ConstantDefine_h

#define APP_VERSION_CODE 10

static int NetNotReachableErrorCode = -9999;
static int OverloadErrorCode = 429;

//设备
#define ScreenWidth  [UIScreen mainScreen].bounds.size.width
#define ScreenHeight  [UIScreen mainScreen].bounds.size.height

#define  StatusBarHeight      (IPHONE_X ? 44.f : 20.f)
#define  NavigationBarHeight  44.f
#define  StatusBarAndNavigationBarHeight  (IPHONE_X ? 88.f : 64.f)
#define  TabbarHeight         (IPHONE_X ? (49.f+34.f) : 49.f)
#define  TabbarSafeBottomMargin         (IPHONE_X ? 34.f : 0.f)
#define  AutoFitValue(x)          ((x)/375.f * ScreenWidth)

//安全区域
#define ViewSafeAreInsets(view) ({UIEdgeInsets insets; if(@available(iOS 11.0, *)) {insets = view.safeAreaInsets;} else {insets = UIEdgeInsetsZero;} insets;})

#define IPHONE_X \
({BOOL isPhoneX = NO;\
if (@available(iOS 11.0, *)) {\
isPhoneX = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(isPhoneX);})

//背景色
#define JJHBackgroundColor       RGBHex(0xf7f7f7)
#define JJHLineColor             RGBCOLOR(244,246,250)
//主题色
#define JJHThemeColor            RGBHex(0xFE8C01)

#define JJHGrayColor9            RGBHex(0x999999)
#define JJHGrayColor6            RGBHex(0x666666)
#define JJHBlackColor3           RGBHex(0x333333)

#define JJHFont(x)               [UIFont systemFontOfSize:x]
#define JJHSCMFont(x)            [UIFont fontWithName:@"PingFangSC-Medium" size:x]
#define JJHSCRFont(x)            [UIFont fontWithName:@"PingFangSC-Regular" size:x]
#define JJHSCSFont(x)            [UIFont fontWithName:@"PingFangSC-Semibold" size:x]
#define JJHFont12                JJHFont(12)
#define JJHFont14                JJHFont(14)
#define JJHFont16                JJHFont(16)
#define JJHFont18                JJHFont(18)
#define JJHImageNamed(x)         [UIImage imageNamed:x]

#define kWeakSelf(weakSelf) __weak __typeof(self)weakSelf = self

//颜色
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]

#define RGBHex(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define RGBHexAlpha(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]

#define JDLocalizedBundleString(string)  NSLocalizedString(string, nil)//NSLocalizedStringFromTableInBundle(string, @"Localized", [NSBundle bundleWithPath:[[[NSBundle mainBundle] bundlePath] stringByAppendingPathComponent:@"JJHAppModule.bundle"]], nil)

#define JJH_LOGINSUCCESS_NOTIFICATION @"JJH_LOGINSUCCESS_NOTIFICATION"
#define JJH_EXITSUCCESS_NOTIFICATION @"JJH_EXITSUCCESS_NOTIFICATION"

//账号信息
#define WechatAppId @"wx39d4a23ce97a84fe"
#define UniversaLinks @"https://www.ciftis.org/toapp/"

#define WeiboAppId @"1915633730"

#define JDPushAppId 1160
#define JDPushAppSecret @"7367eede27eb48db9c35bbcdd48d0799"


#if DEBUG
#define JDPushHost @"11.40.67.232"
#define JDPushPort 443
#else
#define JDPushHost @"cloudreport.jd.com"
#define JDPushPort 2000
#endif

#if DEBUG
#define NSLog(format, ...)  NSLog(format, ## __VA_ARGS__)
#else
#define NSLog(format, ...)
#endif

#endif /* ConstantDefine_h */
