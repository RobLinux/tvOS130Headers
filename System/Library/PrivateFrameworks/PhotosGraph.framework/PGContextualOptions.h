/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGManager, NSDate, NSDateComponents;

@interface PGContextualOptions : NSObject {

	PGManager* _manager;
	NSDate* _localToday;
	NSDateComponents* _localTodayComponents;

}

@property (nonatomic,retain) NSDate * localToday;                                  //@synthesize localToday=_localToday - In the implementation block
@property (nonatomic,retain) NSDateComponents * localTodayComponents;              //@synthesize localTodayComponents=_localTodayComponents - In the implementation block
-(void)setLocalToday:(NSDate *)arg1 ;
-(NSDate *)localToday;
-(id)initWithManager:(id)arg1 options:(id)arg2 ;
-(id)availableContextualRules;
-(NSDateComponents *)localTodayComponents;
-(void)setLocalTodayComponents:(NSDateComponents *)arg1 ;
@end
