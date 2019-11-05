/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface PXCMMComposeRecipientDataSource : NSObject {

	NSArray* _composeRecipients;
	NSSet* _recipients;

}

@property (nonatomic,copy) NSSet * recipients;                                //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy,readonly) NSArray * composeRecipients;              //@synthesize composeRecipients=_composeRecipients - In the implementation block
+(id)new;
-(id)init;
-(void)setRecipients:(NSSet *)arg1 ;
-(NSSet *)recipients;
-(id)initWithComposeRecipients:(id)arg1 recipients:(id)arg2 ;
-(unsigned long long)indexOfComposeRecipientForRecipient:(id)arg1 ;
-(NSArray *)composeRecipients;
@end

