/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSDictionary;

@interface SagaSetItemPropertyOperation : CloudLibraryOperation {

	unsigned _sagaID;
	NSDictionary* _properties;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)main;
-(BOOL)isPersistent;
-(id)initWithConfiguration:(id)arg1 sagaID:(unsigned)arg2 properties:(id)arg3 ;
-(id)initWithSagaID:(unsigned)arg1 properties:(id)arg2 ;
@end

