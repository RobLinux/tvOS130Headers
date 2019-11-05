/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/HeadBoard-Structs.h>
#import <TVMLKit/TVImageDecorator.h>

@class NSNumber;

@interface HBTopShelfLabeledContentGradientImageDecorator : TVImageDecorator {

	double _progress;
	NSNumber* _playbackPercentage;
	CGSize _scaleToSize;

}

@property (nonatomic,retain) NSNumber * playbackPercentage;              //@synthesize playbackPercentage=_playbackPercentage - In the implementation block
@property (assign,nonatomic) CGSize scaleToSize;                         //@synthesize scaleToSize=_scaleToSize - In the implementation block
-(CGSize)expectedSize;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(void)setScaleToSize:(CGSize)arg1 ;
-(id)decoratorIdentifier;
-(CGSize)scaleToSize;
-(NSNumber *)playbackPercentage;
-(void)setPlaybackPercentage:(NSNumber *)arg1 ;
@end

