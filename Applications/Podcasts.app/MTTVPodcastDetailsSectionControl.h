/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UISegmentedControl.h>

@interface MTTVPodcastDetailsSectionControl : UISegmentedControl {

	BOOL _deletePlayedEpisodes;

}

@property (assign,nonatomic) BOOL deletePlayedEpisodes;              //@synthesize deletePlayedEpisodes=_deletePlayedEpisodes - In the implementation block
-(id)init;
-(BOOL)deletePlayedEpisodes;
-(void)setDeletePlayedEpisodes:(BOOL)arg1 ;
-(void)configureSegments;
-(id)_titleForFirstSegment;
@end

