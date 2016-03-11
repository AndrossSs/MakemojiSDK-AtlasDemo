//
//  MEAtlasCollectionViewCell.h
//  Atlas Messenger
//
//  Created by steve on 2/27/16.
//  Copyright © 2016 Layer, Inc. All rights reserved.
//

#import "MEMessageView.h"
#import "ATLMessagePresenting.h"
#import "MECollectionViewCell.h"
#import "ATLOutgoingMessageCollectionViewCell.h"
#import "ATLAvatarImageView.h"

@interface MEOutgoingMessageCollectionViewCell : MECollectionViewCell <ATLMessagePresenting>
@property UIView * bubbleView;
@property ATLAvatarImageView * avatarImageView;
- (NSString *)hexStringFromColor:(UIColor *)color;
@end
