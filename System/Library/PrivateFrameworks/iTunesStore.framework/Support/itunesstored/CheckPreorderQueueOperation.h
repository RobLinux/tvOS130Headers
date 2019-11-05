/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface CheckPreorderQueueOperation : ISOperation {

	NSNumber* _accountID;
	long long _numberOfPreorders;

}

@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) long long numberOfPreordersInQueue; 
-(void)dealloc;
-(void)run;
-(NSNumber *)accountIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(id)_newURLOperation;
-(long long)numberOfPreordersInQueue;
@end

