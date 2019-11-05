/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSAuthenticationContext, ISDialog, ISDialogButton, NSURL;

@interface ServerAuthenticationOperation : ISOperation {

	unsigned long long _authenticatedAccountCredentialSource;
	NSNumber* _authenticatedAccountDSID;
	SSAuthenticationContext* _authenticationContext;
	ISDialog* _dialog;
	BOOL _performsButtonAction;
	ISDialogButton* _performedButton;
	NSURL* _redirectURL;
	ISDialogButton* _selectedButton;

}

@property (readonly) ISDialog * dialog;                                                  //@synthesize dialog=_dialog - In the implementation block
@property (copy) SSAuthenticationContext * authenticationContext;                        //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (assign) BOOL performsButtonAction;                                            //@synthesize performsButtonAction=_performsButtonAction - In the implementation block
@property (assign) unsigned long long authenticatedAccountCredentialSource;              //@synthesize authenticatedAccountCredentialSource=_authenticatedAccountCredentialSource - In the implementation block
@property (readonly) NSNumber * authenticatedAccountDSID;                                //@synthesize authenticatedAccountDSID=_authenticatedAccountDSID - In the implementation block
@property (readonly) ISDialogButton * performedButton;                                   //@synthesize performedButton=_performedButton - In the implementation block
@property (readonly) NSURL * redirectURL;                                                //@synthesize redirectURL=_redirectURL - In the implementation block
@property (readonly) ISDialogButton * selectedButton;                                    //@synthesize selectedButton=_selectedButton - In the implementation block
-(id)init;
-(void)run;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(NSURL *)redirectURL;
-(ISDialog *)dialog;
-(id)_copyAuthenticationContext;
-(NSNumber *)authenticatedAccountDSID;
-(ISDialogButton *)selectedButton;
-(unsigned long long)authenticatedAccountCredentialSource;
-(void)setAuthenticatedAccountCredentialSource:(unsigned long long)arg1 ;
-(void)setPerformsButtonAction:(BOOL)arg1 ;
-(id)initWithDialog:(id)arg1 ;
-(BOOL)performsButtonAction;
-(ISDialogButton *)performedButton;
-(BOOL)_shouldSkipInitialDialog:(id)arg1 ;
-(id)_copyButtonToSkipDialog:(id)arg1 ;
-(BOOL)_copySelectedButton:(id*)arg1 returningError:(id*)arg2 ;
-(BOOL)_shouldAuthenticateForButton:(id)arg1 ;
-(BOOL)_copyAccountIdentifier:(id*)arg1 returningError:(id*)arg2 ;
-(void)_handleSelectedButton:(id)arg1 ;
-(BOOL)_isLocalizationAlreadyConfiguredForAuthContext:(id)arg1 ;
@end

