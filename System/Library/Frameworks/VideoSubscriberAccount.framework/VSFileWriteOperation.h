/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, NSError;

@interface VSFileWriteOperation : VSAsyncOperation {

	VSOptional* _data;
	VSOptional* _destination;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) VSOptional * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) VSOptional * destination;              //@synthesize destination=_destination - In the implementation block
-(id)init;
-(VSOptional *)data;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setData:(VSOptional *)arg1 ;
-(void)setDestination:(VSOptional *)arg1 ;
-(VSOptional *)destination;
-(void)executionDidBegin;
@end

