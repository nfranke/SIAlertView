//
//  SIAlertItem.h
//  SIAlertViewExample
//
//  Created by Kien NGUYEN on 09/08/2015.
//  Copyright (c) 2015 Sumi Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SIAlertView.h"

@interface SIAlertItem : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) SIAlertViewButtonType type;
@property (nonatomic, copy) SIAlertViewHandler action;

@end
