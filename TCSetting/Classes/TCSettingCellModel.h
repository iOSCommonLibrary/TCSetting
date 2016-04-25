//
//  TCSettingCellModel.h
//  TCSetting
//
//  Created by 陈 胜 on 16/4/20.
//  Copyright © 2016年 iTech Technology. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, TCCellAccessoryType) {
    TCCellAccessoryNone,                    // UITableViewCellAccessoryNone
    TCCellAccessoryDisclosureIndicator,     // UITableViewCellAccessoryDisclosureIndicator
    TCCellAccessoryDetailDisclosureButton,  // UITableViewCellAccessoryDetailDisclosureButton
    TCCellAccessoryCheckmark,               // UITableViewCellAccessoryCheckmark
    TCCellAccessoryDetailButton,            // UITableViewCellAccessoryDetailButton
    TCCellAccessorySwitch                   // UISwitch
};

typedef void(^TCCellModelOperation)();

@interface TCSettingCellModel : NSObject

@property (nonatomic, copy) NSString *title;                        // 左边文字
@property (nonatomic, copy) NSString *detail;                       // 右边文字
@property (nonatomic, strong) UIView *detailView;                   // 右边view，优先高于detail
@property (nonatomic, copy) NSString *clazz;                        // push控制器类名
@property (nonatomic, copy) TCCellModelOperation operation;         // 优先级高于clazz
@property (nonatomic, copy) NSString *headerText;                   // section顶部文字
@property (nonatomic, assign) NSTextAlignment headerAlignment;      // footer文字对齐位置
@property (nonatomic, copy) NSString *footerText;                   // section底部文字
@property (nonatomic, assign) NSTextAlignment footerAlignment;      // footer文字对齐位置
@property (nonatomic, assign) TCCellAccessoryType accessoryType;    // 最右边访问指示图标类型，兼容UITableViewCellAccessoryType
@property (nonatomic, assign, getter=isChecked) BOOL checked;       // switch view or checkMark's checked
@property (nonatomic, assign) CGFloat height;                       // cell高度，默认44
@property (nonatomic, strong) id extraData;                         // 额外数据

@end
