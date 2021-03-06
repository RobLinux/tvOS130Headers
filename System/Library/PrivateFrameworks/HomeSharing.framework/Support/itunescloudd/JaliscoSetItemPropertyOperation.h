/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSDictionary;

@interface JaliscoSetItemPropertyOperation : CloudLibraryOperation {

	unsigned long long _purchaseHistoryID;
	NSDictionary* _properties;

}
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)main;
-(id)initWithConfiguration:(id)arg1 purchaseHistoryID:(unsigned long long)arg2 properties:(id)arg3 ;
-(id)initWithPurchaseHistoryID:(unsigned long long)arg1 properties:(id)arg2 ;
@end

