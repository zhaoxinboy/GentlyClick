//
//  QDRWebViewController.h
//  QingDianDemo
//
//  Created by 随看 on 16/10/1.
//  Copyright © 2016年 轻点儿. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QDRWebViewController : UIViewController

- (id)initWithURL:(NSURL *)url andTitle:(NSString *)title;

@property (nonatomic, strong) NSURL *appImageUrl;

@property (nonatomic, strong) NSString *supercode;  //进入后执行的JS代码


@property (nonatomic, strong) NSURL *url;

@end
