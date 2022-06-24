//
//  TweetDetailsViewController.h
//  twitter
//
//  Created by maxfierro on 6/24/22.
//  Copyright © 2022 Emerson Malca. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TweetModel.h"
#import "TweetTableViewCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface TweetDetailsViewController : UIViewController
@property (weak, nonatomic) NSArray *tweetReplyArray;
@property (weak, nonatomic) TweetModel *myTweet;
@end

NS_ASSUME_NONNULL_END
