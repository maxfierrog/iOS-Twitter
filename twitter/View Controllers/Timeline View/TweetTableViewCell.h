//
//  TweetTableViewCell.h
//  twitter
//
//  Created by maxfierro on 6/22/22.
//  Copyright © 2022 Emerson Malca. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TweetModel.h"
#import "TweetUtils.h"
#import "APIManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface TweetTableViewCell : UITableViewCell

@property TweetModel *myTweet;

@property (weak, nonatomic) IBOutlet UIImageView *profilePictureImage;
@property (weak, nonatomic) IBOutlet UILabel *displayName;
@property (weak, nonatomic) IBOutlet UILabel *userNameAndDate;
@property (weak, nonatomic) IBOutlet UILabel *tweetContents;
@property (weak, nonatomic) IBOutlet UIButton *replyButton;
@property (weak, nonatomic) IBOutlet UIButton *retweetButton;
@property (weak, nonatomic) IBOutlet UIButton *favoriteButton;
@property (weak, nonatomic) IBOutlet UIButton *messageButton;
@property (weak, nonatomic) IBOutlet UILabel *replyCountLabel;
@property (weak, nonatomic) IBOutlet UILabel *retweetCountLabel;
@property (weak, nonatomic) IBOutlet UILabel *favoriteCountLabel;
@property (weak, nonatomic) IBOutlet UILabel *tweetedThisLongAgo;

- (void)refreshCellUI;

@end

NS_ASSUME_NONNULL_END
