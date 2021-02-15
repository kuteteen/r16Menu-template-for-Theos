#import <r16Menu/Headers/r16Menu.h>

//easy menu usage in tweak.xm
r16Menu *menu = [r16Menu sharedInstance];

/* source - shmoo's menu */
#define timer(sec) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^ 

#define rgb(rgbValue) [UIColor \
 colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

// Example: rgba(0xFFAABB,.90);
#define rgba(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]