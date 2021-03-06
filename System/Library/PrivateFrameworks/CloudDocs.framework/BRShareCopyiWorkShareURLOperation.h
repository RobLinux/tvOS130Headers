/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKShare, NSString;

@interface BRShareCopyiWorkShareURLOperation : BROperation {

	CKShare* _share;
	NSString* _appName;
	/*^block*/id _shareCopyURLCompletionBlock;

}

@property (nonatomic,retain) CKShare * share;                 //@synthesize share=_share - In the implementation block
@property (nonatomic,retain) NSString * appName;              //@synthesize appName=_appName - In the implementation block
@property (copy) id shareCopyURLCompletionBlock;              //@synthesize shareCopyURLCompletionBlock=_shareCopyURLCompletionBlock - In the implementation block
+(id)iWorkShareableExtensions;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(CKShare *)share;
-(void)setShare:(CKShare *)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(id)initWithShare:(id)arg1 documentType:(id)arg2 ;
-(id)shareCopyURLCompletionBlock;
-(void)setShareCopyURLCompletionBlock:(id)arg1 ;
-(id)initWithShare:(id)arg1 appName:(id)arg2 ;
@end

