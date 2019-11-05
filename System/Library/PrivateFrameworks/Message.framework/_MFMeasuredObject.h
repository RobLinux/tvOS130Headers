/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MFMeasuredObject : NSObject {

	id _object;
	double _measure;

}

@property (nonatomic,retain) id object;                   //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) double measure;              //@synthesize measure=_measure - In the implementation block
+(id)max:(id)arg1 ;
+(id)object:(id)arg1 withMeasure:(double)arg2 ;
+(id)reverseSortedObjects:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)description;
-(void)dealloc;
-(id)object;
-(long long)compare:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(double)measure;
-(void)setMeasure:(double)arg1 ;
-(id)initWithObject:(id)arg1 measure:(double)arg2 ;
@end

