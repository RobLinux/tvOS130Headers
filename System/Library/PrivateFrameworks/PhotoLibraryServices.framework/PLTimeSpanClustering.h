/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLTimeSpanClustering : PLDataClustering {

	unsigned long long _averageNumberOfObjects;
	double _minimumSpan;

}

@property (assign,nonatomic) unsigned long long averageNumberOfObjects;              //@synthesize averageNumberOfObjects=_averageNumberOfObjects - In the implementation block
@property (assign,nonatomic) double minimumSpan;                                     //@synthesize minimumSpan=_minimumSpan - In the implementation block
-(id)init;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)arg1 inDataset:(id)arg2 ;
-(unsigned long long)averageNumberOfObjects;
-(void)setAverageNumberOfObjects:(unsigned long long)arg1 ;
-(double)minimumSpan;
-(void)setMinimumSpan:(double)arg1 ;
@end

