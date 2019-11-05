/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/backboardd-Structs.h>
#import <backboardd/BKHIDEventRecognizer.h>

@class NSArray, NSString;

@interface BKHIDEventSequenceRecognizer : NSObject <BKHIDEventRecognizer> {

	long long _descriptorIndex;
	BOOL _shouldConsumeEvents;
	NSArray* _descriptors;

}

@property (assign,nonatomic) BOOL shouldConsumeEvents;              //@synthesize shouldConsumeEvents=_shouldConsumeEvents - In the implementation block
@property (nonatomic,readonly) NSArray * descriptors;               //@synthesize descriptors=_descriptors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recognizerForEventDescriptor:(id)arg1 ;
+(id)recognizerForEventDescriptors:(id)arg1 ;
-(NSArray *)descriptors;
-(long long)processEvent:(IOHIDEventRef)arg1 shouldConsume:(BOOL*)arg2 ;
-(BOOL)shouldConsumeEvents;
-(void)setShouldConsumeEvents:(BOOL)arg1 ;
@end

