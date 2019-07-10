//
//  ChatViewController.h
//  ParseChat
//
//  Created by jordan487 on 7/10/19.
//  Copyright © 2019 jordan487. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChatViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *messageField;
@property (weak, nonatomic) IBOutlet UIButton *sendButton;
@end

NS_ASSUME_NONNULL_END
