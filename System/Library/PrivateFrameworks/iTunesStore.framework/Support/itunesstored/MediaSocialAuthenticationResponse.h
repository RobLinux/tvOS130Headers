/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class NSNumber, SSAuthenticateResponse, NSMutableOrderedSet, NSOrderedSet;

@interface MediaSocialAuthenticationResponse : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	SSAuthenticateResponse* _authenticateResponse;
	NSMutableOrderedSet* _postIdentifiers;
	NSMutableOrderedSet* _uploadIdentifiers;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;                                 //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) SSAuthenticateResponse * authenticateResponse;              //@synthesize authenticateResponse=_authenticateResponse - In the implementation block
@property (nonatomic,copy) NSOrderedSet * postIdentifiers;                               //@synthesize postIdentifiers=_postIdentifiers - In the implementation block
@property (nonatomic,copy) NSOrderedSet * uploadIdentifiers;                             //@synthesize uploadIdentifiers=_uploadIdentifiers - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSOrderedSet *)uploadIdentifiers;
-(SSAuthenticateResponse *)authenticateResponse;
-(NSOrderedSet *)postIdentifiers;
-(void)addPostIdentifier:(long long)arg1 ;
-(void)addUploadIdentifier:(long long)arg1 ;
-(void)setAuthenticateResponse:(SSAuthenticateResponse *)arg1 ;
-(void)setPostIdentifiers:(NSOrderedSet *)arg1 ;
-(void)setUploadIdentifiers:(NSOrderedSet *)arg1 ;
@end

