/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class NSNumber, NSURL, NSString;

@interface DirectUploadRequest : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	long long _databaseIdentifier;
	NSURL* _localAssetURL;
	NSString* _parentRelationshipType;
	long long _parentUploadIdentifier;
	NSString* _sourceApplication;
	NSString* _uti;

}

@property (assign,nonatomic) long long databaseIdentifier;                  //@synthesize databaseIdentifier=_databaseIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                    //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * localAssetURL;                           //@synthesize localAssetURL=_localAssetURL - In the implementation block
@property (nonatomic,copy) NSString * UTI;                                  //@synthesize uti=_uti - In the implementation block
@property (nonatomic,copy) NSString * parentRelationshipType;               //@synthesize parentRelationshipType=_parentRelationshipType - In the implementation block
@property (assign,nonatomic) long long parentUploadIdentifier;              //@synthesize parentUploadIdentifier=_parentUploadIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceApplication;                    //@synthesize sourceApplication=_sourceApplication - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSString *)UTI;
-(NSString *)sourceApplication;
-(void)setSourceApplication:(NSString *)arg1 ;
-(long long)databaseIdentifier;
-(void)setUTI:(NSString *)arg1 ;
-(NSURL *)localAssetURL;
-(void)setLocalAssetURL:(NSURL *)arg1 ;
-(id)initWithEntity:(id)arg1 accountIdentifier:(id)arg2 ;
-(NSString *)parentRelationshipType;
-(void)setDatabaseIdentifier:(long long)arg1 ;
-(void)setParentRelationshipType:(NSString *)arg1 ;
-(void)setParentUploadIdentifier:(long long)arg1 ;
-(long long)parentUploadIdentifier;
@end

