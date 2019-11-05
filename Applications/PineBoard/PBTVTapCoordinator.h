/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBTVTapCoordinator : NSObject {

	double _lastSingleTVTapTimestamp;
	double _lastDoubleTVTapDownTimestamp;
	double _lastTripleTVTapDownTimestamp;

}

@property (nonatomic,readonly) BOOL didRecognizeDoubleTap; 
@property (nonatomic,readonly) BOOL didRecognizeTripleTap; 
+(id)sharedInstance;
-(void)reset;
-(void)handleTVTapEvent:(id)arg1 ;
-(double)_maxAllowableDeltaBetweenPresses;
-(BOOL)didRecognizeTripleTap;
-(BOOL)didRecognizeDoubleTap;
-(void)registerTVPressDownTimestamp:(double)arg1 ;
@end
