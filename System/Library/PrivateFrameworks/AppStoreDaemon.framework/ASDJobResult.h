/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/NSCopying.h>
#import <AppStoreDaemon/NSSecureCoding.h>

@class NSString, NSError, NSNumber;

@interface ASDJobResult : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleID;
	NSError* _error;
	NSNumber* _persistentID;
	long long _status;

}

@property (nonatomic,retain) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSNumber * persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) long long status;                     //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_resultWithPersistentID:(long long)arg1 bundleID:(id)arg2 status:(long long)arg3 error:(id)arg4 ;
+(id)resultWithExistingActivity:(long long)arg1 bundleID:(id)arg2 ;
+(id)resultWithInvalidActivity:(long long)arg1 bundleID:(id)arg2 ;
+(id)resultWithRestrictedActivity:(long long)arg1 bundleID:(id)arg2 ;
+(id)resultWithValidActivity:(long long)arg1 bundleID:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSNumber *)persistentID;
-(void)setPersistentID:(NSNumber *)arg1 ;
@end

