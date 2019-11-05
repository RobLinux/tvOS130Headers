/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TAVisitDetectionMetrics : NSObject {

	double _distanceToPreviousVisit;
	double _residualDistanceToPreviousVisit;
	unsigned long long _nSigmaBetweenVisits;

}

@property (nonatomic,readonly) double distanceToPreviousVisit;                      //@synthesize distanceToPreviousVisit=_distanceToPreviousVisit - In the implementation block
@property (nonatomic,readonly) double residualDistanceToPreviousVisit;              //@synthesize residualDistanceToPreviousVisit=_residualDistanceToPreviousVisit - In the implementation block
@property (nonatomic,readonly) unsigned long long nSigmaBetweenVisits;              //@synthesize nSigmaBetweenVisits=_nSigmaBetweenVisits - In the implementation block
-(id)initWithDistance:(double)arg1 residualDistance:(double)arg2 nSigma:(unsigned long long)arg3 ;
-(double)distanceToPreviousVisit;
-(double)residualDistanceToPreviousVisit;
-(unsigned long long)nSigmaBetweenVisits;
@end
