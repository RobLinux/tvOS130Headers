/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDynamicProvisioningPageContent.h>

@class NSArray;

@interface PKApplyDocumentUploadPage : PKDynamicProvisioningPageContent {

	NSArray* _acceptableDocuments;

}

@property (nonatomic,retain) NSArray * acceptableDocuments;              //@synthesize acceptableDocuments=_acceptableDocuments - In the implementation block
-(id)initWithJSONObject:(id)arg1 ;
-(NSArray *)acceptableDocuments;
-(void)setAcceptableDocuments:(NSArray *)arg1 ;
@end

