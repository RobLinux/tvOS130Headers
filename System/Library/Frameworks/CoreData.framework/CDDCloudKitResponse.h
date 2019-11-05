/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSCoding.h>
#import <CoreData/NSSecureCoding.h>

@class CDDCloudKitMessage, NSError;

@interface CDDCloudKitResponse : NSObject <NSCoding, NSSecureCoding> {

	BOOL _success;
	CDDCloudKitMessage* _message;
	NSError* _error;

}

@property (nonatomic,readonly) CDDCloudKitMessage * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) BOOL success;                              //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                           //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)supportedErrorClasses;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(CDDCloudKitMessage *)message;
-(BOOL)success;
-(id)initWithMessage:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
@end

