/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/NSCopying.h>

@interface PXDateRange : NSObject <NSCopying> {

	double _startDate;
	double _endDate;

}

@property (readonly) double startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) double endDate;                //@synthesize endDate=_endDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)startDate;
-(double)endDate;
-(id)initWithStartDate:(double)arg1 endDate:(double)arg2 ;
-(BOOL)intersectsRange:(id)arg1 ;
-(BOOL)isStrictlyBeforeRange:(id)arg1 ;
@end

