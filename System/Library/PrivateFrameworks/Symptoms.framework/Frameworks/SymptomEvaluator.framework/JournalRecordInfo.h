/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSMutableData;

@interface JournalRecordInfo : NSObject {

	NSString* _journalName;
	NSDate* _lastUpdate;
	NSMutableData* _journalData;

}

@property (readonly) NSString * journalName;                   //@synthesize journalName=_journalName - In the implementation block
@property (readonly) NSDate * lastUpdate;                      //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (readonly) NSMutableData * journalData;              //@synthesize journalData=_journalData - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastUpdate;
-(NSString *)journalName;
-(NSMutableData *)journalData;
-(id)initWithJournalName:(id)arg1 lastUpdate:(id)arg2 journalData:(id)arg3 ;
@end

