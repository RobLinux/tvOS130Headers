/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVStarRatingView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLStarRatingElement;

@interface TVLStarRatingView : TVStarRatingView <ATVUpdatable> {

	TVLStarRatingElement* _starRatingElement;

}

@property (nonatomic,retain) TVLStarRatingElement * starRatingElement;              //@synthesize starRatingElement=_starRatingElement - In the implementation block
-(id)initWithStarRatingElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(TVLStarRatingElement *)starRatingElement;
-(void)setStarRatingElement:(TVLStarRatingElement *)arg1 ;
@end
