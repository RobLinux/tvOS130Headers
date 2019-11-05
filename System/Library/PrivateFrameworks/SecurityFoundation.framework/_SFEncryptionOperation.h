/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _SFKeySpecifier;


@protocol _SFEncryptionOperation <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy,readonly) _SFKeySpecifier * encryptionKeySpecifier; 
@required
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
-(_SFKeySpecifier *)encryptionKeySpecifier;

@end

