/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <ITMLKit/IKJSNavigationDocument.h>
@class NSArray, NSString;


@protocol IKJSNavigationDocument <JSExport>
@property (nonatomic,retain,readonly) NSArray * documents; 
@property (readonly) NSString * OPTION_RETAIN_CONTEXT; 
@required
-(void)clear;
-(void)popDocument;
-(void)popToDocument:(id)arg1;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1;
-(NSArray *)documents;
-(void)dismissModal;
-(void)pushDocument:(id)arg1 :(id)arg2;
-(void)presentModal:(id)arg1 :(id)arg2;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;
-(void)setDocuments:(id)arg1 :(id)arg2;
-(NSString *)OPTION_RETAIN_CONTEXT;

@end


@protocol IKAppNavigationController;
@class NSArray, NSString;

@interface IKJSNavigationDocument : IKJSObject <IKJSNavigationDocument> {

	SCD_Struct_IK10 _delegateSelectors;
	id<IKAppNavigationController> _navigationControllerDelegate;

}

@property (nonatomic,__weak,readonly) id<IKAppNavigationController> navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (nonatomic,retain,readonly) NSArray * documents; 
@property (readonly) NSString * OPTION_RETAIN_CONTEXT; 
-(void)clear;
-(id)initWithAppContext:(id)arg1 navigationController:(id)arg2 ;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(NSArray *)documents;
-(void)dismissModal;
-(id<IKAppNavigationController>)navigationControllerDelegate;
-(id)_makeAppDocumentWithDocument:(id)arg1 ;
-(void)_migrateMediaControllerFromDocument:(id)arg1 toDocument:(id)arg2 ;
-(void)pushDocument:(id)arg1 :(id)arg2 ;
-(void)presentModal:(id)arg1 :(id)arg2 ;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)setDocuments:(id)arg1 :(id)arg2 ;
-(NSString *)OPTION_RETAIN_CONTEXT;
@end

