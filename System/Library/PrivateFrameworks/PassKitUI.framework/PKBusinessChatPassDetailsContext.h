/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKBusinessChatContext.h>

@class PKPass, NSString;

@interface PKBusinessChatPassDetailsContext : NSObject <PKBusinessChatContext> {

	PKPass* _pass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)requiresAuthorization;
-(id)initWithPass:(id)arg1 ;
-(id)businessIdentifier;
-(id)intentParameters;
-(id)groupParameters;
@end

