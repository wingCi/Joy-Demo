//
//  NEURegionViewController.h
//  NEUGank
//
//  Created by 周鑫城 on 8/2/16.
//  Copyright © 2016 Joy. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^sendValue)(NSString *value);
@interface NEURegionViewController : UIViewController

@property (nonatomic, copy)sendValue sendValueBlock;

@end