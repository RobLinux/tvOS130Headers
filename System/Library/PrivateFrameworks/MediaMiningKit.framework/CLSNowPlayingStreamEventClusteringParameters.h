/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLSNowPlayingStreamEventClusteringParameters : NSObject {

	double _minimumClusteringTimeInSeconds;
	unsigned long long _algorithm;

}

@property (assign,nonatomic) double minimumClusterTimeInSeconds;              //@synthesize minimumClusteringTimeInSeconds=_minimumClusteringTimeInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long algorithm;                    //@synthesize algorithm=_algorithm - In the implementation block
-(id)init;
-(unsigned long long)algorithm;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(double)minimumClusterTimeInSeconds;
-(void)setMinimumClusterTimeInSeconds:(double)arg1 ;
@end

