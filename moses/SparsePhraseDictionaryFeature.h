#ifndef moses_SparsePhraseFeature_h
#define moses_SparsePhraseFeature_h

#include <stdexcept>

#include "FactorCollection.h"
#include "FeatureFunction.h"

namespace Moses
{

/**
  * Collection of sparse features attached to each phrase pair.
  **/
class SparsePhraseDictionaryFeature : public StatelessFeatureFunction {

public:
  SparsePhraseDictionaryFeature(const std::string &line);

  void Evaluate(const PhraseBasedFeatureContext& context,
              ScoreComponentCollection* accumulator) const;
  
  void EvaluateChart(
    const ChartBasedFeatureContext& context,
    ScoreComponentCollection*) const {
    throw std::logic_error("SparsePhraseDictionaryFeature not valid in chart decoder");
	}

};


}


#endif
