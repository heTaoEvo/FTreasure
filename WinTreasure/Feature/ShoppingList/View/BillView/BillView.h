//
//  BillView.h
//  WinTreasure
//
//  Created by Apple on 16/6/6.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^BillViewBlock)(void);
typedef void(^BillSelectBlock)(UIButton *sender);

@interface BillView : UIView

- (void)setDeleteStyle;
- (void)setNormalStyle;

+ (CGFloat)getHeight;

@property (nonatomic, copy) BillViewBlock buyBlock;

@property (nonatomic, copy) BillViewBlock deleteBlock;

@property (nonatomic, copy) BillSelectBlock selectBlock;

@property (nonatomic, assign) BOOL isSelect;

- (void)setSelected:(BOOL)selected;

/**设置全选文字
 */
- (void)setAttributeTitle:(NSString *)text forState:(UIControlState)state;

/**结算金额
 */
- (void)setMoneySum:(NSNumber *)money;

@end
