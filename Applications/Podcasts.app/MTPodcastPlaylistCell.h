/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:20 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTPodcastCell.h>

@class UIView;

@interface MTPodcastPlaylistCell : MTPodcastCell {

	UIView* _disabledView;
	BOOL _added;

}

@property (assign,getter=isAdded,nonatomic) BOOL added;              //@synthesize added=_added - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)isAdded;
-(void)setAdded:(BOOL)arg1 ;
-(id)countView;
@end
