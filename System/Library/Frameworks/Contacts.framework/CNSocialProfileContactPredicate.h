/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>

@class CNSocialProfile;

@interface CNSocialProfileContactPredicate : CNPredicate {

	CNSocialProfile* _socialProfile;

}

@property (nonatomic,copy,readonly) CNSocialProfile * socialProfile;              //@synthesize socialProfile=_socialProfile - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNSocialProfile *)socialProfile;
-(id)initWithSocialProfile:(id)arg1 ;
@end
