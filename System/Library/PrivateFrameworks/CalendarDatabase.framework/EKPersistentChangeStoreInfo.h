/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EKPersistentChangeStoreInfo : NSObject {

	int _minConsumedSequenceNumber;
	int _secondMinConsumedSequenceNumber;
	NSString* _minConsumedClientIdentifier;

}

@property (assign,nonatomic) int minConsumedSequenceNumber;                       //@synthesize minConsumedSequenceNumber=_minConsumedSequenceNumber - In the implementation block
@property (nonatomic,retain) NSString * minConsumedClientIdentifier;              //@synthesize minConsumedClientIdentifier=_minConsumedClientIdentifier - In the implementation block
@property (assign,nonatomic) int secondMinConsumedSequenceNumber;                 //@synthesize secondMinConsumedSequenceNumber=_secondMinConsumedSequenceNumber - In the implementation block
-(id)description;
-(NSString *)minConsumedClientIdentifier;
-(int)minConsumedSequenceNumber;
-(int)secondMinConsumedSequenceNumber;
-(void)setMinConsumedSequenceNumber:(int)arg1 ;
-(void)setMinConsumedClientIdentifier:(NSString *)arg1 ;
-(void)setSecondMinConsumedSequenceNumber:(int)arg1 ;
@end

