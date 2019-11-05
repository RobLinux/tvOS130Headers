/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class TVLImageElement, NSString;

@interface TVLAuthenticationElement : TVLRootElement {

	TVLImageElement* _image;
	NSString* _accountNameTitle;
	NSString* _accountNameInstructions;
	NSString* _accountNameLabel;
	NSString* _accountNameFootnote;
	NSString* _accountPasswordTitle;
	NSString* _accountPasswordInstructions;
	NSString* _accountPasswordLabel;
	NSString* _connectionString;
	NSString* _failureTitle;
	NSString* _failureInstructions;
	NSString* _urlToLoadAfterAuth;

}

@property (nonatomic,retain) TVLImageElement * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * accountNameTitle;                         //@synthesize accountNameTitle=_accountNameTitle - In the implementation block
@property (nonatomic,copy) NSString * accountNameInstructions;                  //@synthesize accountNameInstructions=_accountNameInstructions - In the implementation block
@property (nonatomic,copy) NSString * accountNameLabel;                         //@synthesize accountNameLabel=_accountNameLabel - In the implementation block
@property (nonatomic,copy) NSString * accountNameFootnote;                      //@synthesize accountNameFootnote=_accountNameFootnote - In the implementation block
@property (nonatomic,copy) NSString * accountPasswordTitle;                     //@synthesize accountPasswordTitle=_accountPasswordTitle - In the implementation block
@property (nonatomic,copy) NSString * accountPasswordInstructions;              //@synthesize accountPasswordInstructions=_accountPasswordInstructions - In the implementation block
@property (nonatomic,copy) NSString * accountPasswordLabel;                     //@synthesize accountPasswordLabel=_accountPasswordLabel - In the implementation block
@property (nonatomic,copy) NSString * connectionString;                         //@synthesize connectionString=_connectionString - In the implementation block
@property (nonatomic,copy) NSString * failureTitle;                             //@synthesize failureTitle=_failureTitle - In the implementation block
@property (nonatomic,copy) NSString * failureInstructions;                      //@synthesize failureInstructions=_failureInstructions - In the implementation block
@property (nonatomic,copy) NSString * urlToLoadAfterAuth;                       //@synthesize urlToLoadAfterAuth=_urlToLoadAfterAuth - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(TVLImageElement *)image;
-(void)setImage:(TVLImageElement *)arg1 ;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(void)setAccountNameTitle:(NSString *)arg1 ;
-(void)setAccountNameInstructions:(NSString *)arg1 ;
-(void)setAccountNameLabel:(NSString *)arg1 ;
-(void)setAccountNameFootnote:(NSString *)arg1 ;
-(void)setAccountPasswordTitle:(NSString *)arg1 ;
-(void)setAccountPasswordInstructions:(NSString *)arg1 ;
-(void)setAccountPasswordLabel:(NSString *)arg1 ;
-(void)setConnectionString:(NSString *)arg1 ;
-(void)setFailureTitle:(NSString *)arg1 ;
-(void)setFailureInstructions:(NSString *)arg1 ;
-(void)setUrlToLoadAfterAuth:(NSString *)arg1 ;
-(NSString *)accountNameTitle;
-(NSString *)accountNameInstructions;
-(NSString *)accountNameLabel;
-(NSString *)accountNameFootnote;
-(NSString *)accountPasswordTitle;
-(NSString *)accountPasswordInstructions;
-(NSString *)accountPasswordLabel;
-(NSString *)connectionString;
-(NSString *)failureTitle;
-(NSString *)failureInstructions;
-(NSString *)urlToLoadAfterAuth;
@end

