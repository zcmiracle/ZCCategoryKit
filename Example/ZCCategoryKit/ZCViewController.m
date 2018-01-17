//
//  ZCViewController.m
//  ZCCategoryKit
//
//  Created by 489368600@qq.com on 01/15/2018.
//  Copyright (c) 2018 489368600@qq.com. All rights reserved.
//

#import "ZCViewController.h"
#import "ZCCategoryViewController.h"

@interface ZCViewController ()

@end

@implementation ZCViewController

- (void)viewDidLoad
{
    [super viewDidLoad];

}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    ZCCategoryViewController *vc = [[ZCCategoryViewController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

@end
