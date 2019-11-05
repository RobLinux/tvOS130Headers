/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INPerson.h>
#import <Intents/INImageProxyInjecting.h>
#import <Intents/INRideDriverExport.h>
#import <Intents/NSCopying.h>
#import <Intents/NSSecureCoding.h>

@class NSString;

@interface INRideDriver : INPerson <INImageProxyInjecting, INRideDriverExport, NSCopying, NSSecureCoding> {

	NSString* _rating;

}

@property (nonatomic,copy,readonly) NSString * rating;                   //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)rating;
-(id)_dictionaryRepresentation;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isMe:(BOOL)arg7 ;
-(id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(BOOL)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 ;
-(id)initWithPhoneNumber:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 rating:(id)arg5 ;
-(id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 rating:(id)arg7 aliases:(id)arg8 ;
-(id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 rating:(id)arg7 phoneNumber:(id)arg8 ;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 rating:(id)arg5 phoneNumber:(id)arg6 ;
-(id)initWithHandle:(id)arg1 displayName:(id)arg2 image:(id)arg3 rating:(id)arg4 phoneNumber:(id)arg5 ;
-(id)initWithHandle:(id)arg1 nameComponents:(id)arg2 image:(id)arg3 rating:(id)arg4 phoneNumber:(id)arg5 ;
@end
