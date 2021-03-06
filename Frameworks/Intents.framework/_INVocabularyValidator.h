/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INVocabularyValidator : NSObject

+ (void)load;

- (BOOL)_bundleID:(id)arg1 isWhitelistedForVocabularyType:(int)arg2;
- (void)_confirmExistenceOfWatchAppForCompanionBundleID:(id)arg1 handlingIntents:(id)arg2 completion:(id /* block */)arg3;
- (void)_determineIfBundle:(id)arg1 canProvideVocabularyOfType:(int)arg2 completion:(id /* block */)arg3;
- (id)_intentsUsingVocabularyType:(int)arg1;
- (id)_pluginKitCompatiblePathFromPath:(id)arg1;
- (void)determineIfBundle:(id)arg1 canProvideVocabularyOfType:(int)arg2 completion:(id /* block */)arg3;
- (unsigned int)maximumNumberOfVocabularyStringsForType:(int)arg1;
- (id)validatedItemsFromVocabularyStrings:(id)arg1 ofType:(int)arg2 loggingWarnings:(BOOL)arg3;

@end
