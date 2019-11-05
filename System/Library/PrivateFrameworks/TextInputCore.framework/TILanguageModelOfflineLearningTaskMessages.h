/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TILanguageModelOfflineLearningTask.h>

@protocol TILinguisticDataSource;
@interface TILanguageModelOfflineLearningTaskMessages : TILanguageModelOfflineLearningTask {

	id<TILinguisticDataSource> _dataSource;

}
+(id)dataSourceForTask;
-(id)dataSource;
-(id)initWithClientIdentifier:(id)arg1 oneTimeTask:(BOOL)arg2 ;
@end

