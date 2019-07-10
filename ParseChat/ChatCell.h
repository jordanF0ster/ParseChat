//
//  ChatCell.h
//  ParseChat
//
//  Created by jordan487 on 7/10/19.
//  Copyright © 2019 jordan487. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChatCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *messageLabel;
@property (weak, nonatomic) IBOutlet UILabel *usernameLabel;

- (void)configCellWithText:(NSString *)message username:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
