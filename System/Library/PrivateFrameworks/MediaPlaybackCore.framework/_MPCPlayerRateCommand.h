/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>
#import <MediaPlaybackCore/MPCPlayerRateCommand.h>

@class NSString;

@interface _MPCPlayerRateCommand : _MPCPlayerItemCommand <MPCPlayerRateCommand> {

	float _minimumValue;
	float _maximumValue;

}

@property (assign,nonatomic) float minimumValue;                    //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) float maximumValue;                    //@synthesize maximumValue=_maximumValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)minimumValue;
-(void)setMinimumValue:(float)arg1 ;
-(float)maximumValue;
-(void)setMaximumValue:(float)arg1 ;
-(id)changeValue:(float)arg1 ;
@end

