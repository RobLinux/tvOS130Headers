/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIActivity;

@interface _UIActivitySortItem : NSObject {

	UIActivity* _activity;
	long long _group;
	id _secondarySortValue;
	id _tertiarySortValue;

}

@property (nonatomic,readonly) UIActivity * activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) long long group;                    //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) id secondarySortValue;              //@synthesize secondarySortValue=_secondarySortValue - In the implementation block
@property (nonatomic,readonly) id tertiarySortValue;               //@synthesize tertiarySortValue=_tertiarySortValue - In the implementation block
+(id)sortDescriptorForActivity:(id)arg1 withGroup:(long long)arg2 secondarySortValue:(id)arg3 ;
+(id)sortDescriptorForActivity:(id)arg1 withGroup:(long long)arg2 secondarySortValue:(id)arg3 tertiarySortValue:(id)arg4 ;
-(id)debugDescription;
-(long long)compare:(id)arg1 ;
-(long long)group;
-(UIActivity *)activity;
-(id)secondarySortValue;
-(id)tertiarySortValue;
@end

